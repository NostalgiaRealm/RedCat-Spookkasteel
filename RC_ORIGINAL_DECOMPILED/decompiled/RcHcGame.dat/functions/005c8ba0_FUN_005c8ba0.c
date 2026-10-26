/*
 * FUN_005c8ba0 at 005c8ba0
 * undefined FUN_005c8ba0(void)
 * Address ranges: 005c8ba0-005c8c06
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_005c8ba0(undefined4 *param_1)

{
  int iVar1;
  undefined4 local_28;
  undefined1 local_24 [8];
  undefined4 local_1c;
  
  iVar1 = FUN_005c8820(param_1,local_24,&local_28);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_005c86c0(local_24,&param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_005c85f0(*param_1,local_28,local_1c);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

