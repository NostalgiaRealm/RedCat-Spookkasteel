/*
 * FUN_0056c934 at 0056c934
 * undefined __register FUN_0056c934(int param_1, undefined4 param_2, char * param_3)
 * Address ranges: 0056c934-0056c97d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0056c934(int param_1,undefined4 param_2,char *param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if ((*param_3 == '\x03') && (*(char *)(*(int *)(param_1 + 0x2e4) + 0x47) != '\0')) {
    pcVar1 = (char *)(**(code **)(**(int **)(*(int *)(param_1 + 0x2e4) + 0x208) + 0x4c))();
    iVar2 = FUN_0042d7bc(pcVar1,extraout_EDX,extraout_ECX);
    FUN_0042d464(iVar2,pcVar1);
  }
  return;
}

