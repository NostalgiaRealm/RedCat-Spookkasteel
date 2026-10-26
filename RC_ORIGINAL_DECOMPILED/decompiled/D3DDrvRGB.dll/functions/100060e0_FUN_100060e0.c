/*
 * FUN_100060e0 at 100060e0
 * undefined4 __thiscall FUN_100060e0(void * this, int param_1)
 * Address ranges: 100060e0-10006143
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100060e0(void *this,int param_1)

{
  float fVar1;
  
  *(int *)((int)this + 0xc) = param_1;
  if (param_1 != 0) {
    fVar1 = 1.0 / (float)(1 << (*(byte *)(param_1 + 0x11) & 0x1f));
    *(float *)((int)this + 0x10) = (float)*(int *)(param_1 + 4) * fVar1;
    *(float *)((int)this + 0x14) = (float)*(int *)(param_1 + 8) * fVar1;
    return 0;
  }
  return 0;
}

