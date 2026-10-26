/*
 * FUN_004bd130 at 004bd130
 * undefined4 __register FUN_004bd130(int param_1)
 * Address ranges: 004bd130-004bd185
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004bd130(int param_1)

{
  undefined1 uVar1;
  short sVar2;
  undefined2 extraout_var;
  undefined3 uVar3;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    FUN_00403d94("TAppDAOQuery.AtRecord: No recordset.");
  }
  sVar2 = FUN_004b9af4(*(int *)(param_1 + 0x34));
  if (sVar2 == 0) {
    sVar2 = FUN_004b9dc8(*(int *)(param_1 + 0x34));
    if (sVar2 == 0) {
      uVar3 = (undefined3)(CONCAT22(extraout_var,sVar2) >> 8);
      uVar1 = 1;
      goto LAB_004bd17c;
    }
  }
  uVar1 = 0;
  uVar3 = 0;
LAB_004bd17c:
  return CONCAT31(uVar3,uVar1);
}

