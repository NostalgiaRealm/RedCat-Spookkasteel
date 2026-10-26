/*
 * FUN_0047345c at 0047345c
 * undefined4 __register FUN_0047345c(int * param_1, int param_2)
 * Address ranges: 0047345c-004735ef;004735f7-004735ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0047345c(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_14;
  
  puStack_20 = (undefined1 *)0x473471;
  FUN_00473b1c(param_1);
  puStack_20 = (undefined1 *)0x473481;
  (**(code **)(*param_1 + 0xfc))();
  if (((param_2 < 1) || (*(char *)((int)param_1 + 0x91) != '\0')) &&
     ((-1 < param_2 || ((char)param_1[0x24] != '\0')))) {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined1 *)((int)param_1 + 0x91) = 0;
  iVar1 = param_1[0x11];
  local_14 = 0;
  puStack_24 = &LAB_004735f0;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  for (; 0 < param_2; param_2 = param_2 + -1) {
    iVar2 = param_1[0x11];
    if (param_1[0x12] < iVar2 + -1) {
      param_1[0x12] = param_1[0x12] + 1;
    }
    else {
      iVar3 = param_1[0x10];
      cVar4 = (**(code **)(*param_1 + 0x140))();
      if (cVar4 == '\0') {
        *(undefined1 *)((int)param_1 + 0x91) = 1;
        break;
      }
      local_14 = local_14 - (uint)(iVar3 <= iVar2);
      if (param_1[0x12] < param_1[0x11] + -1) {
        param_1[0x12] = param_1[0x12] + 1;
      }
    }
  }
  do {
    if (-1 < param_2) {
LAB_004735ab:
      *in_FS_OFFSET = uStack_28;
      puStack_20 = (undefined1 *)0x4735f7;
      if (param_1[0x11] == iVar1) {
        puStack_24 = (undefined1 *)0x4735e4;
        (**(code **)(*param_1 + 0xac))(param_1,3,local_14);
      }
      else {
        puStack_24 = (undefined1 *)0x4735d2;
        (**(code **)(*param_1 + 0xac))(param_1,2,0);
      }
      puStack_24 = (undefined1 *)0x4735ef;
      uVar5 = (**(code **)(*param_1 + 0xd8))();
      return uVar5;
    }
    if (param_1[0x12] < 1) {
      iVar3 = param_1[0x11];
      iVar2 = param_1[0x10];
      cVar4 = (**(code **)(*param_1 + 0x148))();
      if (cVar4 == '\0') {
        *(undefined1 *)(param_1 + 0x24) = 1;
        goto LAB_004735ab;
      }
      local_14 = local_14 + (uint)(iVar2 <= iVar3);
      if (0 < param_1[0x12]) {
        param_1[0x12] = param_1[0x12] + -1;
      }
    }
    else {
      param_1[0x12] = param_1[0x12] + -1;
    }
    param_2 = param_2 + 1;
  } while( true );
}

