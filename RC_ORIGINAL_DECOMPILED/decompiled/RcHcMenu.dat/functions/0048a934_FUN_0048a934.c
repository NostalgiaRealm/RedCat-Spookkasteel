/*
 * FUN_0048a934 at 0048a934
 * int __register FUN_0048a934(undefined4 * param_1)
 * Address ranges: 0048a934-0048a96b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x48a74c slot 2 for TFKStringPropDesc. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x48a74c slot 2 for
   TFKStringPropDesc. Original bytes unchanged; names and types still inferred. */

int FUN_0048a934(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_0048cf44(param_1);
  iVar2 = FUN_00403224(piVar1,(int)&PTR_FUN_0048a74c);
  *(undefined4 *)(iVar2 + 0x48) = param_1[0x12];
  return iVar2;
}

