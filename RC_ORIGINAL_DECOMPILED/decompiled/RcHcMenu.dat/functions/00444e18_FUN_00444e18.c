/*
 * FUN_00444e18 at 00444e18
 * undefined __register FUN_00444e18(int * param_1, int * param_2)
 * Address ranges: 00444e18-00444e41
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00444e18(int *param_1,int *param_2)

{
  int iVar1;
  
  if (*(char *)((int)param_1 + 0x35) != '\0') {
    iVar1 = FUN_00403224(param_2,(int)&PTR_FUN_0042e674);
    FUN_00444dcc(param_1,*(char *)(iVar1 + 0x4f));
    *(undefined1 *)((int)param_1 + 0x35) = 1;
  }
  return;
}

