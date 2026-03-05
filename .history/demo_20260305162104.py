from pydantic_ai import Agent, RunContext, UsageLimits
from pydantic_ai.models.huggingface import HuggingFaceModel
import os

hf_api_key = ""
hf_base_url = ""

if not hf_api_key:
    raise ValueError("Set HF_TOKEN or API_KEY in your environment before running demo.py")

model = HuggingFaceModel(
    model_name="mistralai/Mistral-7B-Instruct-v0.2",
    api_key=hf_api_key,
    base_url=hf_base_url
)

joke_generation_agent = Agent(
    model,
    output_type=list[str],
)

joke_selection_agent = Agent(
    model,
    system_prompt=(
        "Use the 'joke_factory' tool to generate some jokes, at least 3, "
        "then choose the best. You must return just a single joke."
    ),
)

@joke_selection_agent.tool
async def joke_factory(ctx: RunContext[None], count: int) -> list[str]:
    print(ctx.usage)

    r = await joke_generation_agent.run(
        f"Please generate {count} jokes",
        usage_limits=UsageLimits(request_limit=5, total_token_limit=600),
        usage=ctx.usage,
    )

    return r.data

result = 