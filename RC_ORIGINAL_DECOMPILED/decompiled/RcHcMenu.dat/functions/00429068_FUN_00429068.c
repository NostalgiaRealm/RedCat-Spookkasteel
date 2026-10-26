/*
 * FUN_00429068 at 00429068
 * undefined __register FUN_00429068(int * param_1)
 * Address ranges: 00429068-00429168
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x424f58 slot 33 for TCustomLabel. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x424f58 slot 33 for
   TCustomLabel. Original bytes unchanged; names and types still inferred. */

void FUN_00429068(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  tagRECT *ptVar4;
  undefined4 *puVar5;
  byte bVar6;
  tagRECT tStack_3c;
  undefined4 auStack_2c [3];
  int iStack_20;
  RECT local_1c;
  
  bVar6 = 0;
  piVar1 = (int *)param_1[0x48];
  uVar2 = FUN_00429280((int)param_1);
  if ((char)uVar2 == '\0') {
    FUN_0041c318((int *)piVar1[5],param_1[0x18]);
    FUN_0041c434((int *)piVar1[5],'\0');
    (**(code **)(*param_1 + 0x40))(param_1,&local_1c);
    FUN_0041c9f8(piVar1,&local_1c);
  }
  FUN_0041c434((int *)piVar1[5],'\x01');
  (**(code **)(*param_1 + 0x40))(param_1,&tStack_3c);
  uVar2 = (uint)(ushort)(*(ushort *)(&DAT_0056f6ac + (uint)*(byte *)((int)param_1 + 0x12f) * 2) |
                         0x40 | *(ushort *)(&DAT_0056f6a4 + (uint)*(byte *)(param_1 + 0x4b) * 2));
  if (*(char *)((int)param_1 + 0x12e) != '\0') {
    ptVar4 = &tStack_3c;
    puVar5 = auStack_2c;
    for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = ptVar4->left;
      ptVar4 = (tagRECT *)((int)ptVar4 + ((uint)bVar6 * -2 + 1) * 4);
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    FUN_00403270(param_1,auStack_2c,uVar2 | 0x400);
    if (*(char *)((int)param_1 + 0x12e) == '\x02') {
      OffsetRect(&tStack_3c,0,param_1[0xf] - iStack_20);
    }
    else {
      iVar3 = param_1[0xf] - iStack_20 >> 1;
      if (iVar3 < 0) {
        iVar3 = iVar3 + (uint)((param_1[0xf] - iStack_20 & 1U) != 0);
      }
      OffsetRect(&tStack_3c,0,iVar3);
    }
  }
  FUN_00403270(param_1,&tStack_3c,uVar2);
  return;
}

