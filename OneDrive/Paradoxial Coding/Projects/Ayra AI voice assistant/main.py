import asyncio

from dotenv import load_dotenv
from livekit.agents import AutoSubscribe,WorkerOptions,cli,llm
from livekit.agents.voice_assistant import VoiceAssistant
from livekit.plugins import silero
import groq

load_dotenv()
async def entrypoint(ctx: JobContext):
    initial_ctx=llm.ChatContext().append(
        role="system"
        text=(
            "You are a voice assistant created by Livekit. Your  interface with users will be voice."
            "You should use short and concise responses, and avoiding usage of unpronouncible punctuation."
        ),
    )
    await ctx.connect(auto_subscribe=AutoSubscribe.AUDIO_ONLY)
    assistant=VoiceAssistant(
        vad=silero.VAD.load()
        
    )
if __name__=="__main__": 
    cli.run_app(WorkerOptions(entrypoint_fnc=entrypoint)):

