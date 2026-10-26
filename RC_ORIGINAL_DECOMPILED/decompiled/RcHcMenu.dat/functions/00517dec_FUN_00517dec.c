/*
 * FUN_00517dec at 00517dec
 * undefined __register FUN_00517dec(int * param_1, int * param_2)
 * Address ranges: 00517dec-00517e87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x5179fc slot 2 for TDaviKind. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x5179fc slot 2 for
   TDaviKind. Original bytes unchanged; names and types still inferred. */

void FUN_00517dec(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_005179fc);
  if ((char)uVar1 == '\0') {
    FUN_00412a74(param_1,param_2);
  }
  else {
    iVar2 = FUN_00403224(param_2,(int)&PTR_FUN_005179fc);
    FUN_00403e04(param_1 + 3,*(undefined4 **)(iVar2 + 0xc));
    iVar2 = FUN_00403224(param_2,(int)&PTR_FUN_005179fc);
    FUN_00403e04(param_1 + 4,*(undefined4 **)(iVar2 + 0x10));
    iVar2 = FUN_00403224(param_2,(int)&PTR_FUN_005179fc);
    FUN_00517d98((int)param_1,*(undefined4 *)(iVar2 + 0x14));
    iVar2 = FUN_00403224(param_2,(int)&PTR_FUN_005179fc);
    FUN_00403e04(param_1 + 6,*(undefined4 **)(iVar2 + 0x18));
  }
  return;
}

