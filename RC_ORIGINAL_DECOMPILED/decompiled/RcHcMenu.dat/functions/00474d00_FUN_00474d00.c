/*
 * FUN_00474d00 at 00474d00
 * undefined __register FUN_00474d00(int * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 00474d00-00474fcf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00474d00(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 *in_FS_OFFSET;
  bool bVar4;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_18 = &LAB_00474fd0;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar3 = FUN_00404030(*param_1);
  bVar4 = iVar3 == 0;
  if ((((!bVar4) &&
       ((((FUN_00404140((uint *)*param_1,(uint *)&DAT_00474fe8), !bVar4 ||
          (*(char *)(param_4 + -5) != '\x05')) && (*(char *)(param_4 + -6) == '\0')) &&
        ((iVar3 = FUN_00409870("DISTINCT",(undefined *)*param_1), iVar3 != 0 ||
         (*(char *)(param_4 + -5) != '\x05')))))) &&
      (iVar3 = FUN_00409870(&DAT_00475008,(undefined *)*param_1), iVar3 != 0)) &&
     ((((iVar3 = FUN_00409870("ASCENDING",(undefined *)*param_1), iVar3 != 0 &&
        (iVar3 = FUN_00409870(&DAT_00475028,(undefined *)*param_1), iVar3 != 0)) &&
       ((iVar3 = FUN_00409870("DESCENDING",(undefined *)*param_1), iVar3 != 0 &&
        (((iVar3 = FUN_00409870("SELECT",(undefined *)*param_1), iVar3 != 0 &&
          (iVar3 = FUN_00409870(&DAT_0047505c,(undefined *)*param_1), iVar3 != 0)) &&
         (iVar3 = FUN_00409870(&DAT_00475068,(undefined *)*param_1), iVar3 != 0)))))) &&
      (iVar3 = FUN_00409870(&DAT_00475074,(undefined *)*param_1), iVar3 != 0)))) {
    iVar3 = FUN_00409870(&DAT_00475084,(undefined *)*param_1);
    if (iVar3 == 0) {
      cVar2 = FUN_00474c44(&DAT_00475090,param_1,extraout_ECX,param_4);
      if (cVar2 == '\0') {
        uVar1 = **(undefined4 **)(param_4 + -4);
        FUN_00403e48((int *)&local_8,*param_1);
        iVar3 = param_4;
        cVar2 = FUN_00474c44(&DAT_004750a0,param_1,extraout_ECX_00,param_4);
        if ((cVar2 == '\0') ||
           (cVar2 = FUN_00474c44(&DAT_00475090,param_1,iVar3,param_4), cVar2 == '\0')) {
          **(undefined4 **)(param_4 + -4) = uVar1;
          FUN_00403e04(param_1,local_8);
        }
      }
    }
    else {
      iVar3 = FUN_00409870(&DAT_004750ac,(undefined *)*param_1);
      if (((((iVar3 != 0) && (iVar3 = FUN_00409870("WHERE",(undefined *)*param_1), iVar3 != 0)) &&
           ((iVar3 = FUN_00409870("GROUP",(undefined *)*param_1), iVar3 != 0 ||
            (cVar2 = FUN_00474c44(&DAT_004750dc,param_1,extraout_ECX_01,param_4), cVar2 == '\0'))))
          && ((((iVar3 = FUN_00409870("HAVING",(undefined *)*param_1), iVar3 != 0 &&
                (iVar3 = FUN_00409870("UNION",(undefined *)*param_1), iVar3 != 0)) &&
               (iVar3 = FUN_00409870(&DAT_00475108,(undefined *)*param_1), iVar3 != 0)) &&
              ((iVar3 = FUN_00409870(&DAT_00475118,(undefined *)*param_1), iVar3 != 0 ||
               (cVar2 = FUN_00474c44("UPDATE",param_1,extraout_ECX_02,param_4), cVar2 == '\0'))))))
         && ((iVar3 = FUN_00409870("ORDER",(undefined *)*param_1), iVar3 != 0 ||
             (cVar2 = FUN_00474c44(&DAT_004750dc,param_1,extraout_ECX_03,param_4), cVar2 == '\0'))))
      {
        FUN_00409870(&DAT_00475090,(undefined *)*param_1);
      }
    }
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00474fd7;
  puStack_18 = (undefined1 *)0x474fcf;
  FUN_00403db0((int *)&local_8);
  return;
}

