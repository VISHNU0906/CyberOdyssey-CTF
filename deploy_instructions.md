# Deployment Instructions

## GitHub

1. Push this repo to GitHub under `YourUser/CyberOdyssey-CTF`.  
2. Verify all files are present.

## Vercel

1. Log in at https://vercel.com and import the `CyberOdyssey-CTF` repo.  
2. In Project Settings → Environment Variables:
   - `SECRET_KEY`: a random string (for Flask session).  
   - `DATABASE_URL`: your Postgres connection string.  
3. Deploy. Vercel will auto-build using `CTFd_app/vercel.json`.  
4. After deployment, visit the generated URL, create your admin user, and configure CTFd as in **README.md**.
