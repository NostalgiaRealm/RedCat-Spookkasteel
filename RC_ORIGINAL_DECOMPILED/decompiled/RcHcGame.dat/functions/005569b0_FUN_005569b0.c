/*
 * FUN_005569b0 at 005569b0
 * undefined FUN_005569b0(void)
 * Address ranges: 005569b0-00556a29
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005569b0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_30 [12];
  
  FUN_005b30c0();
  FUN_005b3250(*(undefined4 *)(param_1 + 0x3c));
  FUN_005b31f0(*(undefined4 *)(param_1 + 0x34));
  FUN_005b3220(*(undefined4 *)(param_1 + 0x38));
  FUN_005b3280(*(undefined4 *)(param_1 + 0x210),*(undefined4 *)(param_1 + 0x214),
               *(undefined4 *)(param_1 + 0x218));
  FUN_005c9420();
  puVar2 = local_30;
  puVar3 = (undefined4 *)(param_1 + 0x1e0);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 1;
}

