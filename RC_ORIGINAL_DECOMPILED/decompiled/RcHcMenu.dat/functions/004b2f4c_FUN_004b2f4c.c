/*
 * FUN_004b2f4c at 004b2f4c
 * undefined4 __register FUN_004b2f4c(int * param_1, int * param_2)
 * Address ranges: 004b2f4c-004b2fa7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4b2750 slot 1 for TWhereProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4b2750 slot 1 for
   TWhereProp. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_004b2f4c(int *param_1,int *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined3 extraout_var;
  undefined3 uVar5;
  
  if (param_1 == param_2) {
LAB_004b2f9c:
    uVar5 = (undefined3)((uint)param_1 >> 8);
    uVar2 = 1;
  }
  else {
    if (param_2 != (int *)0x0) {
      uVar3 = FUN_0040320c(param_2,(int)&PTR_FUN_004b2750);
      if ((char)uVar3 != '\0') {
        iVar4 = FUN_00403224(param_2,(int)&PTR_FUN_004b2750);
        cVar1 = FUN_0048d3ac((byte *)(iVar4 + 4),(byte *)(param_1 + 1));
        param_1 = (int *)CONCAT31(extraout_var,cVar1);
        if (cVar1 != '\0') goto LAB_004b2f9c;
      }
    }
    uVar2 = 0;
    uVar5 = 0;
  }
  return CONCAT31(uVar5,uVar2);
}

