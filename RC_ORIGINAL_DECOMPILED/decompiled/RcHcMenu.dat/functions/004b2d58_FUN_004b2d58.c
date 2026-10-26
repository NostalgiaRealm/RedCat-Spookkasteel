/*
 * FUN_004b2d58 at 004b2d58
 * undefined4 __register FUN_004b2d58(uint * param_1, uint * param_2)
 * Address ranges: 004b2d58-004b2db1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4b25f4 slot 1 for TWhereSym. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4b25f4 slot 1 for
   TWhereSym. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_004b2d58(uint *param_1,uint *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined3 uVar3;
  undefined1 uVar4;
  
  if (param_1 == param_2) {
LAB_004b2da6:
    uVar3 = (undefined3)((uint)param_1 >> 8);
    uVar4 = 1;
  }
  else {
    if (param_2 != (uint *)0x0) {
      uVar1 = FUN_0040320c((int *)param_2,(int)&PTR_FUN_004b25f4);
      uVar4 = (char)uVar1 == '\0';
      if (!(bool)uVar4) {
        iVar2 = FUN_00403224((int *)param_2,(int)&PTR_FUN_004b25f4);
        param_1 = FUN_00404140(*(uint **)(iVar2 + 4),(uint *)param_1[1]);
        if ((bool)uVar4) goto LAB_004b2da6;
      }
    }
    uVar4 = 0;
    uVar3 = 0;
  }
  return CONCAT31(uVar3,uVar4);
}

