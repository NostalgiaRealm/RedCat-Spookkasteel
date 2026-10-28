// Test-harness preload (node --import): many older scene scripts call
// app.startLevel(n>0) on a fresh profile, which the campaign lock now refuses.
// Seed unlocked progress in every page, only when the page has none of its own.
import {chromium} from 'playwright';
const launch=chromium.launch.bind(chromium);
const seed=()=>{try{if(!localStorage.getItem('redcat.progress.v1'))localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));}catch{}};
chromium.launch=async(...args)=>{
  const browser=await launch(...args);
  const newContext=browser.newContext.bind(browser),newPage=browser.newPage.bind(browser);
  browser.newContext=async(...a)=>{const context=await newContext(...a);await context.addInitScript(seed);return context;};
  browser.newPage=async(...a)=>{const page=await newPage(...a);await page.context().addInitScript(seed);return page;};
  return browser;
};
