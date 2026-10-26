/*
 * FUN_0045631c at 0045631c
 * undefined __register FUN_0045631c(int * param_1)
 * Address ranges: 0045631c-004563ea;004563f2-00456457;0045645f-0045649e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045631c(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  iVar2 = param_1[0x54];
  if (iVar2 != param_1[0x58]) {
    cVar1 = *(char *)((int)param_1 + 0x4b);
    if (cVar1 == '\x01') {
      puStack_10 = (undefined1 *)0x456380;
      FUN_00431f98((int *)param_1[0x4d],iVar2);
    }
    else {
      if (cVar1 == '\x02') {
        puStack_10 = (undefined1 *)0x4563fd;
        FUN_00435304(param_1[9]);
        puStack_14 = &LAB_00456458;
        uStack_18 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_18;
        piVar3 = (int *)param_1[0x4d];
        puStack_10 = &stack0xfffffffc;
        FUN_00431f54(piVar3,(piVar3[0xf] - param_1[0x54]) + piVar3[0xd]);
        FUN_00431f98((int *)param_1[0x4d],param_1[0x54]);
        *in_FS_OFFSET = uStack_18;
        puStack_10 = (undefined1 *)0x45645f;
        puStack_14 = (undefined1 *)0x456457;
        FUN_0043530c(param_1[9]);
        return;
      }
      if (cVar1 == '\x03') {
        puStack_10 = (undefined1 *)0x45636b;
        FUN_00431f78((int *)param_1[0x4d],iVar2);
      }
      else if (cVar1 == '\x04') {
        puStack_10 = (undefined1 *)0x456390;
        FUN_00435304(param_1[9]);
        puStack_14 = &LAB_004563eb;
        uStack_18 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_18;
        piVar3 = (int *)param_1[0x4d];
        puStack_10 = &stack0xfffffffc;
        FUN_00431f34(piVar3,(piVar3[0xe] - param_1[0x54]) + piVar3[0xc]);
        FUN_00431f78((int *)param_1[0x4d],param_1[0x54]);
        *in_FS_OFFSET = uStack_18;
        puStack_10 = (undefined1 *)0x45645f;
        puStack_14 = (undefined1 *)0x4563ea;
        FUN_0043530c(param_1[9]);
        return;
      }
    }
    puStack_10 = (undefined1 *)0x45646a;
    (**(code **)(*param_1 + 0x80))();
    if (*(short *)((int)param_1 + 0x17a) != 0) {
      puStack_10 = (undefined1 *)0x456489;
      (*(code *)param_1[0x5e])(param_1[0x5f],param_1);
    }
    param_1[0x58] = param_1[0x54];
  }
  return;
}

