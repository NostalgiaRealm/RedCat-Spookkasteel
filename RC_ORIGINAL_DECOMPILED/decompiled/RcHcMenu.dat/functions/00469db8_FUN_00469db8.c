/*
 * FUN_00469db8 at 00469db8
 * undefined __register FUN_00469db8(int param_1, uint param_2)
 * Address ranges: 00469db8-00469e18;00469e20-00469e2e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00469db8(int param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  cVar2 = (char)param_2;
  if (cVar2 != *(char *)(param_1 + 0x36)) {
    if (*(int *)(param_1 + 0x30) != 0) {
      uStack_14 = 0x469dd7;
      FUN_0046864c(*(int *)(param_1 + 0x30),param_2,param_1);
    }
    iVar1 = *(int *)(param_1 + 0x28);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x60) != 0)) {
      iVar1 = *(int *)(iVar1 + 0x60);
      uStack_14 = 0x469df2;
      FUN_0046735c(iVar1);
      uStack_1c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_1c;
      *(char *)(param_1 + 0x36) = cVar2;
      *in_FS_OFFSET = uStack_1c;
      uStack_14 = 0x469e2a;
      uStack_18 = 0x469e18;
      FUN_00467394(iVar1);
      return;
    }
    uStack_14 = 0x469e27;
    FUN_00468d14(param_1);
    *(char *)(param_1 + 0x36) = cVar2;
  }
  return;
}

