/*
 * FUN_0045a3e0 at 0045a3e0
 * undefined FUN_0045a3e0(void)
 * Address ranges: 0045a3e0-0045a46c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0045a3e0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 local_c [12];
  
  if (*(char *)(param_1 + 1000) != '\0') {
    puVar1 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x360) + 0x48))(local_c);
    *(undefined4 *)(param_1 + 0x3d0) = *puVar1;
    *(undefined4 *)(param_1 + 0x3d4) = puVar1[1];
    *(undefined4 *)(param_1 + 0x3d8) = puVar1[2];
    FUN_004dc0d0();
    iVar2 = FUN_00554a20();
    puVar3 = &stack0xfffffff0;
    *(float *)(param_1 + 0x3d4) = *(float *)(iVar2 + 4) + *(float *)(param_1 + 0x3d4);
    FUN_004dc0d0(puVar3);
    puVar1 = (undefined4 *)FUN_00554a50(puVar3);
    *(undefined4 *)(param_1 + 0x3dc) = *puVar1;
    *(undefined4 *)(param_1 + 0x3e0) = puVar1[1];
    *(undefined4 *)(param_1 + 0x3e4) = puVar1[2];
  }
  return;
}

