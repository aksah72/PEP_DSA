from pydmatic_ai import Agent , RunContext , UsageLimits
from pydmatic_ai.models.huggingface import HuggingFaceModel
import sys

hf_api_key = ""
hf_base_url = ""
if not hf_api_key:
    raise ValueError("Set IF_TOKEN or API_KEY in your environmnt before running demo.py")



joke_selection_agent = Agent(
    model,
    system_prompt = ('use the 'joke_factory' to generate some jooks , at least 3, then choose the best.' 'you must return just a single joke'),
)

joke_generation_agent = Agent(
    model , output_type = list[str];
)

@joke_selection_agent.tool

async def joke_factory(ctx : RunContext[None],count : int) -> list[str];
    print(ctx.usage)
    r = await joke_generation_agent.run(
        f'Please generate (count) jokes',
        usage_linits = UsageLimits()
    )