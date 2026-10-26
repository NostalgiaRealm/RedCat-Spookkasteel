/*
 * FUN_00453000 at 00453000
 * undefined FUN_00453000(void)
 * Address ranges: 00453000-0045305d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00453000(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float10 fVar3;
  
  if (*(undefined4 **)(param_1 + 0x80) != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)**(undefined4 **)(param_1 + 0x80);
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x14) + 0x28))();
    (*(code *)*puVar1)((float)fVar3);
    iVar2 = **(int **)(param_1 + 0x80);
    fVar3 = (float10)FUN_00439bc0();
    (**(code **)(iVar2 + 8))((float)fVar3);
    (**(code **)(**(int **)(param_1 + 0x80) + 0x10))();
  }
  if (*(int **)(param_1 + 0x84) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0045305a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x84) + 0x10))();
    return;
  }
  return;
}

