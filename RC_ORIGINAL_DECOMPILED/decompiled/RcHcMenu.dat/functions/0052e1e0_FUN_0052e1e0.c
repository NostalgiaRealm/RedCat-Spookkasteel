/*
 * FUN_0052e1e0 at 0052e1e0
 * undefined __register FUN_0052e1e0(void)
 * Address ranges: 0052e1e0-0052e25a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0052e1e0(void)

{
  int *piVar1;
  int iVar2;
  int in_stack_00000004;
  
  while( true ) {
    iVar2 = FUN_0045da14(*(int *)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x84));
    if (iVar2 < 1) break;
    piVar1 = (int *)FUN_004e25c4(*(int **)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x84),0)
    ;
    FUN_004d4718(*(int **)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x34),piVar1,'\0');
    piVar1 = (int *)FUN_004e25c4(*(int **)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x84),0)
    ;
    FUN_00403094(piVar1);
    FUN_0045d540(*(int **)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x84),0);
  }
  return;
}

