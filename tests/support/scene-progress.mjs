// Many scene scripts start chapters 2-5 directly on a fresh browser profile,
// which the campaign lock refuses. Seed fully unlocked progress before the
// game loads, unless the page already stores progress of its own.
export async function unlockChapters(page) {
  await page.addInitScript(()=>{
    try {
      if(!localStorage.getItem('redcat.progress.v1'))localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));
    } catch {}
  });
}
