/*
 * FUN_00598f20 at 00598f20
 * undefined FUN_00598f20(void)
 * Address ranges: 00598f20-00598fb8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00598f20(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00644228;
  local_c = ExceptionList;
  iVar4 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  do {
    cVar1 = FUN_0059b1f0();
    if (cVar1 != '\0') {
      iVar2 = FUN_0059b1e0();
      iVar3 = FUN_0059b1e0();
      if (iVar2 == iVar3) {
        local_4 = 0xffffffff;
        FUN_005630e0();
        ExceptionList = local_c;
        return 1;
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 8);
  local_4 = 0xffffffff;
  FUN_005630e0();
  ExceptionList = local_c;
  return 0;
}

