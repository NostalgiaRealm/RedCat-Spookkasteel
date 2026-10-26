/*
 * FUN_005cd410 at 005cd410
 * undefined FUN_005cd410(void)
 * Address ranges: 005cd410-005cd4c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall
FUN_005cd410(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x10 + param_2 * 0x1c);
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0xc) + param_2 * 0x1c);
  puVar1[4] = param_3;
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1[2] = param_6;
  if (iVar2 != param_3) {
    if (iVar2 != 0) {
      FUN_005ba5d0(*(undefined4 *)(param_1 + 0x60),iVar2);
      FUN_005c02b0();
    }
    puVar1[3] = 0;
    if (param_3 != 0) {
      FUN_005c01c0();
      puVar1[3] = 1;
      iVar2 = FUN_005ba560(*(undefined4 *)(param_1 + 0x60),param_3);
      if (iVar2 == 0) {
        FUN_005cf220(0xffffffff,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006aa4ec + 8,0xfe,
                     &DAT_006b3f70,0);
        return 0;
      }
    }
  }
  return 1;
}

