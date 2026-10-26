/*
 * FUN_0045c428 at 0045c428
 * undefined __register FUN_0045c428(int param_1, int param_2)
 * Address ranges: 0045c428-0045c45a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045c428(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0045bc54((int *)&LAB_0045bc2c,'\x01',*(undefined4 **)(param_1 + 0xc),param_2);
  (**(code **)(**(int **)(param_1 + 8) + 0xc))(*(int **)(param_1 + 8),uVar1);
  return;
}

