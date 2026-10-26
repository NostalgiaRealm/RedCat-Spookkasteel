/*
 * FUN_0045f9d8 at 0045f9d8
 * undefined __register FUN_0045f9d8(undefined4 * param_1)
 * Address ranges: 0045f9d8-0045fa70;0045fa78-0045fa7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045f9d8(undefined4 *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x45f9e8;
  bVar1 = FUN_0045fb88((int)param_1);
  if (!bVar1) {
    puStack_10 = (undefined1 *)0x45f9fa;
    FUN_0045fbc8((int)param_1,'\x01');
    puStack_14 = &LAB_0045fa71;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    puStack_10 = &stack0xfffffffc;
    uVar3 = FUN_0045fb34((int)param_1);
    if ((char)uVar3 != '\0') {
      FUN_0045f9d8((undefined4 *)param_1[3]);
    }
    cVar2 = FUN_0045f790((int)param_1);
    if (cVar2 == '\0') {
      FUN_0045fc58(param_1,'\x01');
    }
    else {
      FUN_0045fc58(param_1,'\0');
      if (param_1[1] != 0) {
        FUN_00403270((int *)param_1[1],extraout_EDX,extraout_ECX);
      }
    }
    *in_FS_OFFSET = uStack_18;
    puStack_10 = (undefined1 *)0x45fa78;
    puStack_14 = (undefined1 *)0x45fa70;
    FUN_0045fbc8((int)param_1,'\0');
    return;
  }
  return;
}

