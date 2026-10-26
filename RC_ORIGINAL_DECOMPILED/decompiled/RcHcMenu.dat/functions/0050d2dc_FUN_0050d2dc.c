/*
 * FUN_0050d2dc at 0050d2dc
 * undefined __register FUN_0050d2dc(int * param_1, int * param_2)
 * Address ranges: 0050d2dc-0050d3b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0050d2dc(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  char *pcStack_12c;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_114 [256];
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  puStack_11c = &LAB_0050d3b8;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (param_2 != (int *)0x0) {
    uVar2 = FUN_0040320c(param_2,(int)&PTR_FUN_004b19f0);
    puVar1 = puStack_118;
    if ((char)uVar2 == '\0') {
      FUN_00402fe0(*local_8,local_114);
      FUN_00403fd4(&local_14,local_114);
      pcStack_12c = "AppProp-type not supported by control";
      FUN_004040f0(&local_10,3);
      FUN_00403d94(local_10);
      puVar1 = puStack_118;
    }
  }
  puStack_118 = puVar1;
  if (local_c == (int *)0x0) {
    FUN_004fec0c(local_8,'\0');
  }
  else {
    iVar3 = FUN_00496d84((int)local_c);
    FUN_004fec0c(local_8,(*(byte *)(iVar3 + 0x18) & 0x20) != 0);
  }
  FUN_004f1924((undefined4 *)local_8[0xa0],(int)local_c);
  *in_FS_OFFSET = pcStack_12c;
  FUN_00403dd4(&local_14,2);
  return;
}

