/*
 * FUN_10001c10 at 10001c10
 * undefined4 __stdcall FUN_10001c10(void)
 * Address ranges: 10001c10-10001ca9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10001c10(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *unaff_retaddr;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  
  iVar1 = _grSstQueryHardware_4(&local_94);
  if (iVar1 != 0) {
    puVar2 = unaff_retaddr;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    switch(local_94) {
    case 0:
    case 3:
      *unaff_retaddr = uStack_90;
      unaff_retaddr[1] = uStack_88;
      break;
    case 1:
      unaff_retaddr[1] = uStack_8c;
      *unaff_retaddr = uStack_90;
      return 1;
    case 2:
      FUN_10001920(7,s_GMain_GetBoardInfo__GR_SSTTYPE_A_1000e43c);
      return 0;
    }
    return 1;
  }
  FUN_10001920(7,s_GMain_GetBoardInfo__grSstQueryHa_1000e470);
  return 0;
}

