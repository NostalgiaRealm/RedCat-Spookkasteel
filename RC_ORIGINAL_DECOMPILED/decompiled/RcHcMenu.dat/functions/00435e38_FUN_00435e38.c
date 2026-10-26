/*
 * FUN_00435e38 at 00435e38
 * undefined __register FUN_00435e38(int * param_1)
 * Address ranges: 00435e38-00435f0d;00435f2b-00435f31
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00435e38(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  if (((*(char *)((int)param_1 + 0x47) == '\0') &&
      (((*(byte *)(param_1 + 8) & 0x10) == 0 || ((*(byte *)((int)param_1 + 0x41) & 4) != 0)))) ||
     ((*(byte *)(param_1 + 0x11) & 8) != 0)) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  if (cVar1 != '\0') {
    if (param_1[0x53] == 0) {
      puStack_1c = (undefined1 *)0x435e8e;
      (**(code **)(*param_1 + 0x8c))();
    }
    if ((param_1[0x60] != 0) && (iVar3 = *(int *)(param_1[0x60] + 8), -1 < iVar3 + -1)) {
      iVar4 = 0;
      do {
        puStack_1c = (undefined1 *)0x435eb6;
        piVar2 = (int *)FUN_00412384((undefined4 *)param_1[0x60],iVar4);
        puStack_1c = (undefined1 *)0x435ebb;
        FUN_00435e38(piVar2);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  if ((param_1[0x53] != 0) && ((char)param_1[0x5a] != cVar1)) {
    *(char *)(param_1 + 0x5a) = cVar1;
    puStack_20 = &LAB_00435f0e;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    puStack_1c = &stack0xfffffffc;
    FUN_00433700((int)param_1,0xb019,0,0);
    *in_FS_OFFSET = uStack_24;
  }
  return;
}

