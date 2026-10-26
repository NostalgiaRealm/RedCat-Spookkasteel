/*
 * FUN_0045fa7c at 0045fa7c
 * undefined __register FUN_0045fa7c(int * param_1)
 * Address ranges: 0045fa7c-0045fb1b;0045fb23-0045fb26
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045fa7c(int *param_1)

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
  
  puStack_10 = (undefined1 *)0x45fa8c;
  bVar1 = FUN_0045fba8((int)param_1);
  if (!bVar1) {
    puStack_10 = (undefined1 *)0x45fa9e;
    FUN_0045fbf0((int)param_1,'\x01');
    puStack_14 = &LAB_0045fb1c;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    puStack_10 = &stack0xfffffffc;
    cVar2 = FUN_0045f7e0((int)param_1);
    if (cVar2 == '\0') {
      FUN_0045fc94(param_1,'\x01');
      uVar3 = FUN_0045fb34((int)param_1);
      if ((char)uVar3 != '\0') {
        *(undefined1 *)(param_1[3] + 0x11) = 1;
      }
    }
    else {
      FUN_0045fc94(param_1,'\0');
      (**(code **)(*param_1 + 0xc))();
      if (param_1[2] != 0) {
        FUN_00403270((int *)param_1[2],extraout_EDX,extraout_ECX);
      }
    }
    *in_FS_OFFSET = uStack_18;
    puStack_10 = (undefined1 *)0x45fb23;
    puStack_14 = (undefined1 *)0x45fb1b;
    FUN_0045fbf0((int)param_1,'\0');
    return;
  }
  return;
}

