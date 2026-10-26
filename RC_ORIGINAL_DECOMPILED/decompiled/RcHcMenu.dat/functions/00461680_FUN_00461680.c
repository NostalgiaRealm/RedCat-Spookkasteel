/*
 * FUN_00461680 at 00461680
 * undefined __register FUN_00461680(undefined * param_1, undefined4 * param_2, undefined4 param_3, int * param_4, undefined1 param_5, int param_6, int param_7)
 * Address ranges: 00461680-00461804
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00461680(undefined *param_1,undefined4 *param_2,undefined4 param_3,int *param_4,
                 undefined1 param_5,int param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  undefined4 extraout_EDX;
  undefined4 uVar3;
  undefined4 extraout_EDX_00;
  undefined4 *unaff_EBX;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  undefined4 *in_FS_OFFSET;
  int *piVar4;
  undefined4 **ppuVar5;
  undefined4 *puVar6;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  uint local_14;
  
  local_24 = (undefined4 *)&stack0xfffffffc;
  iVar2 = 4;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  LOCK();
  UNLOCK();
  local_28 = (undefined4 *)&LAB_00461805;
  local_2c = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_2c;
  if (param_7 < param_6) {
    local_24 = (undefined4 *)&stack0xfffffffc;
    uVar1 = FUN_0046128c(param_1,1);
    local_14 = param_7 - 1;
    if ((uVar1 & 1) != 0) {
      local_14 = 0xffffffff;
    }
    FUN_00404238((int)param_2,1,local_14,param_4);
    iVar2 = param_6 - param_7;
    uVar3 = extraout_EDX;
    if (0 < iVar2) {
      do {
        FUN_00403f58((int *)&stack0xffffffe8,CONCAT31((int3)((uint)uVar3 >> 8),param_5));
        FUN_00404038(param_4,unaff_EBX);
        iVar2 = iVar2 + -1;
        uVar3 = extraout_EDX_00;
      } while (iVar2 != 0);
    }
    piVar4 = (int *)&stack0xffffffe4;
    uVar1 = FUN_00404030((int)param_2);
    FUN_00404238((int)param_2,local_14 + 1,uVar1,piVar4);
    FUN_00404038(param_4,unaff_ESI);
  }
  else if (param_6 < param_7) {
    local_24 = (undefined4 *)&stack0xfffffffc;
    uVar1 = FUN_0046128c(param_1,1);
    if ((uVar1 & 1) == 0) {
      ppuVar5 = &local_28;
      uVar1 = FUN_00404030((int)param_2);
      FUN_00404238((int)param_2,param_7,uVar1,(int *)ppuVar5);
      puVar6 = local_28;
      FUN_00404238((int)param_2,1,param_6 - 1,(int *)&local_2c);
      FUN_0040407c(param_4,local_2c,puVar6);
    }
    else {
      piVar4 = (int *)&stack0xffffffe0;
      uVar1 = FUN_00404030((int)param_2);
      FUN_00404238((int)param_2,param_7 - param_6,uVar1,piVar4);
      FUN_00404238((int)param_2,1,0xffffffff,(int *)&local_24);
      FUN_0040407c(param_4,local_24,unaff_EDI);
    }
  }
  else {
    FUN_00403e04(param_4,param_2);
  }
  *in_FS_OFFSET = local_2c;
  local_24 = (undefined4 *)&LAB_0046180c;
  local_28 = (undefined4 *)0x461804;
  FUN_00403dd4((int *)&local_2c,6);
  return;
}

