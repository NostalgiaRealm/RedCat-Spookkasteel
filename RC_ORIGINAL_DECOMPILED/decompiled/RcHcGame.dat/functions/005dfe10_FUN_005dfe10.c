/*
 * FUN_005dfe10 at 005dfe10
 * undefined FUN_005dfe10(void)
 * Address ranges: 005dfe10-005dfe69
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_005dfe10(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_005cf3b0(0x40);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_005cf220(0x60,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006b09ec,0x44,&DAT_006b3f70,0
                );
    return (undefined4 *)0x0;
  }
  *puVar1 = param_1;
  *(undefined2 *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  *(undefined2 *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  *(undefined2 *)(puVar1 + 5) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[0xe] = 0xffffffff;
  *(undefined2 *)(puVar1 + 0xf) = 0;
  return puVar1;
}

