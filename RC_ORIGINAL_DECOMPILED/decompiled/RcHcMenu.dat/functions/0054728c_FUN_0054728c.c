/*
 * FUN_0054728c at 0054728c
 * undefined __register FUN_0054728c(int * param_1, int param_2)
 * Address ranges: 0054728c-00547511
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054728c(int *param_1,int param_2)

{
  undefined1 *puVar1;
  undefined **ppuVar2;
  int *piVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  char *pcStack_134;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  int local_11c;
  int local_118;
  byte local_114 [256];
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_118 = 0;
  local_11c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_124 = &LAB_00547512;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (param_2 == 0) {
    FUN_00402fe0(*param_1,local_114);
    FUN_00403fd4(&local_14,local_114);
    pcStack_134 = "Sortorder can\'t be nil";
    FUN_004040f0(&local_10,3);
    FUN_00403d94(local_10);
    puVar1 = puStack_120;
  }
  puStack_120 = puVar1;
  ppuVar2 = (undefined **)FUN_00402fdc(local_8);
  if (ppuVar2 == &PTR_FUN_005470ec) {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_11c,local_114);
    FUN_004040f0(&local_118,3);
    FUN_00403d94(local_118);
  }
  *(undefined1 *)(local_8 + 6) = 0;
  local_8[7] = *(int *)(local_c + 4);
  *(undefined1 *)(local_8 + 4) = 0;
  piVar3 = FUN_00496f60((int *)&DAT_0048e950,'\x01',*(int *)(local_c + 4),*(byte *)(local_c + 8),
                        (undefined4 *)0x0);
  local_8[0xf] = (int)piVar3;
  FUN_0049708c(local_8[0xf],local_c);
  *(undefined1 *)(local_8 + 0x10) = 2;
  piVar3 = FUN_0045b810((int *)&LAB_0045b7d8,'\x01',CONCAT31((int3)((uint)extraout_ECX >> 8),1));
  local_8[8] = (int)piVar3;
  iVar4 = FUN_0049206c((int *)local_8[7]);
  local_8[0xb] = iVar4;
  FUN_00494398((int *)local_8[0xb]);
  FUN_0045fcd0(local_8[0xb],extraout_EDX,extraout_ECX_00,0x547958,(int)local_8);
  local_8[0xc] = 0;
  *(undefined1 *)(local_8 + 0xe) = 0;
  *(undefined1 *)((int)local_8 + 0x41) = 1;
  *(undefined1 *)((int)local_8 + 0x42) = 2;
  local_8[0x11] = 0;
  piVar3 = FUN_0045e14c((int *)&PTR_FUN_0045df38,'\x01',(int)local_8);
  local_8[0x14] = (int)piVar3;
  piVar3 = FUN_0045e14c((int *)&PTR_FUN_0045df38,'\x01',(int)local_8);
  local_8[0x15] = (int)piVar3;
  piVar3 = FUN_0045e14c((int *)&PTR_FUN_0045df38,'\x01',(int)local_8);
  local_8[0x1d] = (int)piVar3;
  piVar3 = FUN_0045e14c((int *)&PTR_FUN_0045df38,'\x01',(int)local_8);
  local_8[0x1f] = (int)piVar3;
  piVar3 = FUN_0045e14c((int *)&PTR_FUN_0045df38,'\x01',(int)local_8);
  local_8[0x16] = (int)piVar3;
  piVar3 = FUN_0045e14c((int *)&PTR_FUN_0045df38,'\x01',(int)local_8);
  local_8[0x17] = (int)piVar3;
  local_8[0x18] = 0;
  piVar3 = FUN_0045e14c((int *)&PTR_FUN_0045df38,'\x01',(int)local_8);
  local_8[0x19] = (int)piVar3;
  local_8[0x1a] = 0;
  local_8[0x1b] = 0;
  local_8[0x1c] = 0;
  local_8[0x1e] = 0;
  *in_FS_OFFSET = pcStack_134;
  FUN_00403dd4(&local_11c,2);
  FUN_00403dd4(&local_14,2);
  return;
}

