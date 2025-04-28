# Cyber Odyssey CTF

This repository contains everything you need to launch **Cyber Odyssey**, a three-tier Capture-The-Flag event built on CTFd.

## Structure

- **CTFd_app/** – Flask/CTFd application and Vercel config  
- **challenges/** – Three challenge folders:  
  - Easy-CaesarShift (Crypto)  
  - Medium-HiddenInPixels (Stego)  
  - Hard-AdversarialAssault (AI/ML)

## Quick Start

1. Clone this repo.  
2. Create & activate a Python venv.  
3. Install requirements (`pip install -r CTFd_app/requirements.txt`).  
4. Run `python CTFd_app/app.py` and visit http://localhost:8000.  
5. In the Admin panel, add the three challenges (see their folders).  
6. Set up sequential requirements:  
   - HiddenInPixels → requires CaesarShift  
   - AdversarialAssault → requires HiddenInPixels  
7. Share the URL with players.
