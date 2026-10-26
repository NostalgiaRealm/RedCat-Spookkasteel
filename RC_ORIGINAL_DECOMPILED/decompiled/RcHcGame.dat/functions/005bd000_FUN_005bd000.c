/*
 * FUN_005bd000 at 005bd000
 * undefined FUN_005bd000(void)
 * Address ranges: 005bd000-005bd1e0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005bd000(int param_1)

{
  undefined4 *puVar1;
  undefined1 local_320 [800];
  
  (**(code **)(*(int *)(param_1 + 0x33678) + 0x1c))();
  puVar1 = (undefined4 *)FUN_005bd1f0(local_320,0,0x40000,0);
  if (puVar1 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x3905c) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x39078) = *puVar1;
    *(undefined4 *)(param_1 + 0x3907c) = puVar1[1];
    *(undefined4 *)(param_1 + 0x3905c) = 1;
  }
  puVar1 = (undefined4 *)FUN_005bd1f0(local_320,0,4,0);
  if (puVar1 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x39060) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x39080) = *puVar1;
    *(undefined4 *)(param_1 + 0x39084) = puVar1[1];
    *(undefined4 *)(param_1 + 0x39060) = 1;
  }
  puVar1 = (undefined4 *)FUN_005bd1f0(local_320,0,2,0);
  if (puVar1 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x39064) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x39088) = *puVar1;
    *(undefined4 *)(param_1 + 0x3908c) = puVar1[1];
    *(undefined4 *)(param_1 + 0x39064) = 1;
  }
  puVar1 = (undefined4 *)FUN_005bd1f0(local_320,0,2,1);
  if (puVar1 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x39068) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x39090) = *puVar1;
    *(undefined4 *)(param_1 + 0x39094) = puVar1[1];
    *(undefined4 *)(param_1 + 0x39068) = 1;
  }
  puVar1 = (undefined4 *)FUN_005bd1f0(local_320,0,1,0);
  if (puVar1 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x3906c) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x39098) = *puVar1;
    *(undefined4 *)(param_1 + 0x3909c) = puVar1[1];
    *(undefined4 *)(param_1 + 0x3906c) = 1;
  }
  puVar1 = (undefined4 *)FUN_005bd1f0(local_320,0,8,0);
  if (puVar1 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x39070) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x390a0) = *puVar1;
    *(undefined4 *)(param_1 + 0x390a4) = puVar1[1];
    *(undefined4 *)(param_1 + 0x39070) = 1;
  }
  puVar1 = (undefined4 *)FUN_005bd1f0(local_320,0,0x10,0);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x390a8) = *puVar1;
    *(undefined4 *)(param_1 + 0x390ac) = puVar1[1];
    *(undefined4 *)(param_1 + 0x39074) = 1;
    return 1;
  }
  *(undefined4 *)(param_1 + 0x39074) = 0;
  return 1;
}

