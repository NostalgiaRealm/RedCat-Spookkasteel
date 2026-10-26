/*
 * FUN_0049b5ec at 0049b5ec
 * undefined __register FUN_0049b5ec(int * param_1, int param_2, undefined4 param_3)
 * Address ranges: 0049b5ec-0049b656
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x49893c slot 13 for TDIB. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x49893c slot 13 for TDIB.
   Original bytes unchanged; names and types still inferred. */

void FUN_0049b5ec(int *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  undefined *puVar3;
  
  if (param_2 < 1) {
    FUN_0049aa40(param_1,param_2,param_3);
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x1c))();
    if (cVar1 == '\0') {
      FUN_0049b884(param_1,(int *)param_1[0x23],param_2,(undefined *)param_1[0xf]);
    }
    else {
      puVar3 = (undefined *)0x8;
      piVar2 = (int *)FUN_004989d0(param_1[0x23],1);
      FUN_0049b884(param_1,piVar2,param_2,puVar3);
    }
  }
  return;
}

