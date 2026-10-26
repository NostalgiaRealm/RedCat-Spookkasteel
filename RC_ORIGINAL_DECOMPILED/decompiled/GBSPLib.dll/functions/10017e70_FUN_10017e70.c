/*
 * FUN_10017e70 at 10017e70
 * undefined FUN_10017e70(void)
 * Address ranges: 10017e70-10018080
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_10017e70(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  int local_44 [8];
  undefined4 local_24;
  undefined4 local_20;
  
  if (*(int *)(param_1 + 0x70) != 0) {
    param_1 = *(int *)(param_1 + 0x70);
  }
  if ((0 < *(int *)(param_1 + 0x6c)) || (*(int *)(param_1 + 0x74) != 0)) {
    uVar8 = 0x7d3;
LAB_10018066:
    FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_c_1003c5d4,uVar8,&DAT_10265ce0,0);
    return 0;
  }
  if (*(int *)(param_1 + 0xac) == 0) {
    uVar8 = 0x7d9;
    goto LAB_10018066;
  }
  if (*(int *)(param_1 + 0xb8) == 0) {
    return 1;
  }
  iVar2 = FUN_100214a0(param_1,1);
  if (iVar2 == 0) {
    return 0;
  }
  if (((*(int *)(param_1 + 0x24) != 0) && (*(int *)(param_1 + 0xa0) != 0)) &&
     (iVar2 = FUN_1001a050(), iVar2 == 0)) {
    FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_c_1003c5d4,0x7eb,&DAT_10265ce0,0);
  }
  iVar2 = FUN_100165d0(*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94));
  if (iVar2 == 0) {
    bVar1 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x90);
    bVar1 = 1;
    if (iVar2 <= *(int *)(param_1 + 0x94)) {
      piVar7 = local_44 + iVar2;
      piVar6 = (int *)(param_1 + 0x28 + iVar2 * 4);
      do {
        iVar5 = *piVar7;
        if (piVar6[8] != 0) {
          iVar3 = FUN_10016ac0();
          iVar4 = FUN_100162f0(param_1,iVar2);
          if (iVar4 == 0) {
            bVar1 = 0;
          }
          iVar4 = *piVar6;
          FUN_10016c20(param_1 + 4,iVar2,&local_24);
          if (((iVar3 == 0) || (iVar4 == 0)) ||
             (iVar5 = FUN_10022010(iVar5 + 4,iVar3,iVar5,&local_24,iVar4,param_1,local_24,local_20),
             iVar5 == 0)) {
            bVar1 = 0;
          }
        }
        FUN_10016aa0();
        iVar2 = iVar2 + 1;
        piVar6 = piVar6 + 1;
        piVar7 = piVar7 + 1;
      } while (iVar2 <= *(int *)(param_1 + 0x94));
    }
    *(undefined4 *)(param_1 + 0xb8) = 0;
    if (bVar1 != 0) goto LAB_10018036;
  }
  FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_c_1003c5d4,0x823,&DAT_10265ce0,0);
LAB_10018036:
  iVar2 = FUN_100214a0(param_1,0);
  return -(iVar2 != 0) & bVar1;
}

