/*
 * FUN_00485d68 at 00485d68
 * undefined __register FUN_00485d68(int param_1, undefined4 * param_2, undefined1 param_3)
 * Address ranges: 00485d68-00485de3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00485d68(int param_1,undefined4 *param_2,undefined1 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  
  piVar2 = FUN_00476ce0((int *)&DAT_00474bcc,'\x01',param_1,(int *)&DAT_0057149c,0,(undefined4 *)0x0
                        ,0,param_3,param_2);
  *in_FS_OFFSET = &stack0xffffffe0;
  uVar1 = *(undefined4 *)(param_1 + 0x168);
  uVar3 = thunk_FUN_00479465(uVar1);
  FUN_0047fe48(uVar3);
  *in_FS_OFFSET = uVar1;
  FUN_00403094(piVar2);
  return;
}

