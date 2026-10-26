/*
 * FUN_0054c75c at 0054c75c
 * undefined __register FUN_0054c75c(undefined4 * param_1)
 * Address ranges: 0054c75c-0054c80e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054c75c(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (*(char *)(param_1 + 0xba) != '\0') {
    iVar1 = FUN_00402fdc(param_1);
    uVar2 = FUN_0040320c(*(int **)(param_1[0xb5] + 0x24),iVar1);
    if ((char)uVar2 == '\0') {
      FUN_00432958((int *)param_1[0xc6],extraout_EDX,extraout_ECX);
      FUN_004e15ec((int *)param_1[0xc6],(int *)param_1[0xb5]);
      if (*(char *)(param_1 + 0xd2) == '\0') {
        if (*(char *)(param_1 + 0xca) == '\0') {
          FUN_004e2270((int *)param_1[0xc6]);
        }
        else {
          FUN_004e1f38((int *)param_1[0xc6],(int *)param_1[0xb5]);
        }
        *(undefined1 *)(param_1 + 0xca) = 0;
      }
      FUN_004504b8(*(int *)PTR_DAT_005723fc);
    }
  }
  return;
}

