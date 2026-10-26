/*
 * FUN_004e5994 at 004e5994
 * undefined __register FUN_004e5994(void)
 * Address ranges: 004e5994-004e5a61
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e5994(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int in_stack_00000004;
  
  while( true ) {
    iVar3 = FUN_0045da14(*(int *)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x84));
    if (iVar3 < 1) break;
    uVar1 = FUN_004e25c4(*(int **)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x84),0);
    FUN_004e592c(*(int *)(*(int *)(in_stack_00000004 + 8) + -4),uVar1);
    piVar2 = (int *)FUN_004e25c4(*(int **)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x84),0)
    ;
    FUN_004d4718(*(int **)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x34),piVar2,'\0');
    uVar1 = FUN_004e25c4(*(int **)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x84),0);
    FUN_004e5960(*(int *)(*(int *)(in_stack_00000004 + 8) + -4),uVar1);
    piVar2 = (int *)FUN_004e25c4(*(int **)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x84),0)
    ;
    FUN_00403094(piVar2);
    FUN_0045d540(*(int **)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x84),0);
  }
  return;
}

