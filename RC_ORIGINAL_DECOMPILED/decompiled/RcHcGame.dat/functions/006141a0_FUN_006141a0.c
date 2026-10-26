/*
 * FUN_006141a0 at 006141a0
 * undefined FUN_006141a0(void)
 * Address ranges: 006141a0-006142ec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_006141a0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  cVar1 = *DAT_00710054;
  if (cVar1 == '\0') {
    FUN_00614fc6(2);
    FUN_006152a2(((param_4 == 0) - 1U & 4) + 0x26);
    iVar2 = FUN_0061503c();
    if (iVar2 == 0) {
      FUN_00615373(param_2);
    }
    iVar2 = FUN_0061503c();
    if (iVar2 == 0) {
      iVar2 = FUN_0061503c();
      if (iVar2 == 0) {
        FUN_006152a2(0x20);
      }
      FUN_00615373(param_3);
    }
    puVar4 = local_c;
  }
  else {
    if ((('5' < cVar1) && (cVar1 < ':')) || (cVar1 == '_')) {
      FUN_00614dcd(((param_4 == 0) - 1U & 4) + 0x26);
      iVar2 = FUN_0061503c();
      if (iVar2 == 0) {
        iVar2 = FUN_0061503c();
        if ((iVar2 != 0) || ((*(byte *)(param_3 + 4) & 0x10) == 0)) {
          FUN_00615373(param_2);
        }
      }
      iVar2 = FUN_0061503c();
      if (iVar2 == 0) {
        FUN_00615373(param_3);
      }
      uVar3 = FUN_00613db8(local_14,local_c);
      FUN_00614df0(uVar3);
      return param_1;
    }
    uVar3 = FUN_006142ed(local_14,param_3,((param_4 == 0) - 1U & 4) + 0x26,param_2,0);
    FUN_00614df0(uVar3);
    puVar4 = (undefined1 *)FUN_0061476d(local_14,local_c,param_4);
  }
  FUN_00614df0(puVar4);
  return param_1;
}

