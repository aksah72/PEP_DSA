from pydmatic_ai import Agent , RunContext , UsageLimits

hf_api_key = ""
hf_base_url = ""



joke_selection_agent = Agent(
    model,
    system_prompt = ('use the 'joke_factory' to generate some jooks , at least 3, then choose the best.'
                     '')
)