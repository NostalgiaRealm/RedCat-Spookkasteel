/*
 * FUN_10004930 at 10004930
 * undefined FUN_10004930(void)
 * Address ranges: 10004930-100049a8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10004930(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 local_c [12];
  
  iVar3 = 0;
  FUN_100145f0();
  for (puVar1 = *(undefined4 **)(param_1 + 0x34); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[(iVar2 == param_1) + 3]) {
    iVar2 = puVar1[2];
    FUN_1000d810(*puVar1,local_c);
    FUN_10014580(param_2);
    iVar3 = iVar3 + 1;
  }
  FUN_10014530(1.0 / (float)iVar3);
  return;
}

