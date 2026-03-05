from pydantic_ai import Agent, RunContext, UsageLimits
from pydantic_ai.models.huggingface import HuggingFaceModel
import os

hf_api_key = ""
hf_base_url = "curl "https://generativelanguage.googleapis.com/v1beta/models/gemini-flash-latest:generateContent" \
  -H 'Content-Type: application/json' \
  -H 'X-goog-api-key: AIzaSyA1jYiVwX0bVziUVKOyxasmyK7_DxH7XdM' \
  -X POST \
  -d '{
    "contents": [
      {
        "parts": [
          {
            "text": "Explain how AI works in a few words"
          }
        ]
      }
    ]
result = joke_selection_agent.run_sync(
    'tell me a joke',
    usage_limits=UsageLimits(request_limit=5,total_token_limit=700),
)
