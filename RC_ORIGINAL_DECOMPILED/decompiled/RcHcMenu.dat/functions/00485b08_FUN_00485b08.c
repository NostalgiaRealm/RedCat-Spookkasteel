/*
 * FUN_00485b08 at 00485b08
 * undefined __register FUN_00485b08(int * param_1, char param_2)
 * Address ranges: 00485b08-00485b66
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00485b08(int *param_1,char param_2)

{
  undefined3 in_register_00000009;
  
  (**(code **)(*param_1 + 0xac))(param_1,CONCAT31(in_register_00000009,7),0);
  if (param_2 == '\0') {
    FUN_00402944((undefined4 *)param_1[0x75],(undefined4 *)param_1[0x76],
                 *(ushort *)(param_1 + 0x7a) + 6);
  }
  else {
    *(undefined1 *)param_1[0x76] = *(undefined1 *)((int)param_1 + 0x92);
  }
  FUN_0047114c(param_1,'\x01');
  (**(code **)(*param_1 + 0xac))(param_1,2,0);
  return;
}

