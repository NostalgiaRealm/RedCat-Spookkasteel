/*
 * FUN_00473a6c at 00473a6c
 * int __register FUN_00473a6c(undefined4 param_1, char * param_2, char * param_3)
 * Address ranges: 00473a6c-00473a90
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 146 for TDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 146 for
   TDataSet. Original bytes unchanged; names and types still inferred. */

int FUN_00473a6c(undefined4 param_1,char *param_2,char *param_3)

{
  int iVar1;
  
  if (param_2 == (char *)0x0) {
    iVar1 = 0;
  }
  else {
    if (param_3 != param_2) {
      FUN_0040a170(param_3,param_2);
    }
    iVar1 = FUN_0040a108(param_3);
  }
  return iVar1;
}

