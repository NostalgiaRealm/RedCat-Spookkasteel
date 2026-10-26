/*
 * FUN_004917c4 at 004917c4
 * undefined4 __register FUN_004917c4(int * param_1, byte * param_2)
 * Address ranges: 004917c4-00491817
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004917c4(int *param_1,byte *param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 uVar5;
  
  cVar1 = FUN_00492f80(param_1,param_2);
  if (cVar1 == '\0') {
    iVar4 = FUN_00492440(param_1,param_2);
    if ((*(byte *)(iVar4 + 0x18) & 0x40) == 0) {
      bVar2 = FUN_004918fc((int)param_1);
      uVar5 = extraout_var;
      if (!bVar2) {
        bVar2 = FUN_0049191c((int)param_1);
        uVar5 = extraout_var_00;
        if (!bVar2) goto LAB_00491808;
      }
      uVar3 = 1;
      goto LAB_0049180e;
    }
  }
LAB_00491808:
  uVar3 = 0;
  uVar5 = 0;
LAB_0049180e:
  return CONCAT31(uVar5,uVar3);
}

