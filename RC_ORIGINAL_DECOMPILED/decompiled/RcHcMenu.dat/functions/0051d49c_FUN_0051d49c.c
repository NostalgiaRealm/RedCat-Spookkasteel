/*
 * FUN_0051d49c at 0051d49c
 * undefined __register FUN_0051d49c(int param_1, int param_2)
 * Address ranges: 0051d49c-0051d584
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051d49c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  
  FUN_00516b04(param_2,"Alignment",(uint)*(byte *)(param_1 + 4));
  FUN_00516b48(param_2,"CanMove",
               CONCAT31((int3)((uint)extraout_ECX >> 8),*(undefined1 *)(param_1 + 5)));
  FUN_00516b48(param_2,"CanSize",
               CONCAT31((int3)((uint)extraout_ECX_00 >> 8),*(undefined1 *)(param_1 + 6)));
  FUN_00516b48(param_2,"CanSort",
               CONCAT31((int3)((uint)extraout_ECX_01 >> 8),*(undefined1 *)(param_1 + 7)));
  FUN_00516b48(param_2,"Fixed",
               CONCAT31((int3)((uint)extraout_ECX_02 >> 8),*(undefined1 *)(param_1 + 8)));
  FUN_00516b04(param_2,"Margin",*(undefined4 *)(param_1 + 0x10));
  uVar1 = FUN_0051c878(param_1);
  FUN_00516b04(param_2,"SortIndex",uVar1);
  FUN_00516b04(param_2,"SortOrder",(uint)*(byte *)(param_1 + 0x24));
  FUN_00516a60(param_2,"Title",*(undefined **)(param_1 + 0x28));
  FUN_00516b48(param_2,"Visible",
               CONCAT31((int3)((uint)extraout_ECX_03 >> 8),*(undefined1 *)(param_1 + 0x30)));
  FUN_00516b04(param_2,"Width",*(undefined4 *)(param_1 + 0x34));
  return;
}

