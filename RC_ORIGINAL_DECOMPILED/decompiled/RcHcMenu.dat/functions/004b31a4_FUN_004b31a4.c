/*
 * FUN_004b31a4 at 004b31a4
 * undefined4 __register FUN_004b31a4(_union_2683 * param_1, _union_2683 * param_2)
 * Address ranges: 004b31a4-004b321b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4b2824 slot 1 for TWhereParam. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4b2824 slot 1 for
   TWhereParam. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_004b31a4(_union_2683 *param_1,_union_2683 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined3 uVar3;
  undefined1 uVar4;
  bool bVar5;
  
  if (param_1 == param_2) {
LAB_004b3210:
    uVar3 = (undefined3)((uint)param_1 >> 8);
    uVar4 = 1;
  }
  else {
    if (param_2 != (_union_2683 *)0x0) {
      uVar1 = FUN_0040320c((int *)param_2,(int)&PTR_FUN_004b2824);
      uVar4 = (char)uVar1 == '\0';
      if (!(bool)uVar4) {
        iVar2 = FUN_00403224((int *)param_2,(int)&PTR_FUN_004b2824);
        FUN_00404140(*(uint **)(iVar2 + 4),(uint *)(param_1->decVal).Hi32);
        if ((bool)uVar4) {
          iVar2 = FUN_00403224((int *)param_2,(int)&PTR_FUN_004b2824);
          bVar5 = &(param_1->n2).n3 == (_union_2685 *)0x0;
          param_1 = FUN_00405abc((VARIANTARG *)(iVar2 + 8),(VARIANTARG *)&(param_1->n2).n3.brecVal);
          if (bVar5) goto LAB_004b3210;
        }
      }
    }
    uVar4 = 0;
    uVar3 = 0;
  }
  return CONCAT31(uVar3,uVar4);
}

