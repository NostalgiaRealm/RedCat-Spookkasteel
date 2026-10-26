/*
 * FUN_004b3064 at 004b3064
 * undefined4 __register FUN_004b3064(_union_2683 * param_1, _union_2683 * param_2)
 * Address ranges: 004b3064-004b30bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4b27b0 slot 1 for TWhereValue. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4b27b0 slot 1 for
   TWhereValue. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_004b3064(_union_2683 *param_1,_union_2683 *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined3 uVar4;
  bool bVar5;
  
  if (param_1 == param_2) {
LAB_004b30b2:
    uVar4 = (undefined3)((uint)param_1 >> 8);
    uVar1 = 1;
  }
  else {
    if (param_2 != (_union_2683 *)0x0) {
      uVar2 = FUN_0040320c((int *)param_2,(int)&PTR_FUN_004b27b0);
      if ((char)uVar2 != '\0') {
        iVar3 = FUN_00403224((int *)param_2,(int)&PTR_FUN_004b27b0);
        bVar5 = &(param_1->n2).n3 == (_union_2685 *)0x0;
        param_1 = FUN_00405abc((VARIANTARG *)(iVar3 + 8),(VARIANTARG *)&(param_1->n2).n3.brecVal);
        if (bVar5) goto LAB_004b30b2;
      }
    }
    uVar1 = 0;
    uVar4 = 0;
  }
  return CONCAT31(uVar4,uVar1);
}

