/*
 * FUN_0046c3f0 at 0046c3f0
 * undefined __register FUN_0046c3f0(int * param_1, undefined2 * param_2)
 * Address ranges: 0046c3f0-0046c458;0046c460-0046c46e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x464828 slot 35 for TVarBytesField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x464828 slot 35 for
   TVarBytesField. Original bytes unchanged; names and types still inferred. */

void FUN_0046c3f0(int *param_1,undefined2 *param_2)

{
  bool bVar1;
  LONG LVar2;
  int iVar3;
  void *pvVar4;
  LONG extraout_ECX;
  void *extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x46c403;
  bVar1 = FUN_00405df8((int)param_2);
  if (bVar1) {
    puStack_14 = (undefined1 *)0x46c414;
    LVar2 = FUN_00405d8c((int)param_2,1,extraout_ECX);
    puStack_14 = (undefined1 *)0x46c41e;
    iVar3 = (**(code **)(*param_1 + 0x68))();
    if (LVar2 + 1 == iVar3) {
      puStack_14 = (undefined1 *)0x46c42a;
      pvVar4 = FUN_00405db4((int)param_2,extraout_EDX,extraout_ECX_00);
      puStack_18 = &LAB_0046c459;
      uStack_1c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_1c;
      puStack_14 = &stack0xfffffffc;
      FUN_00469acc((int)param_1,pvVar4,CONCAT31((int3)((uint)extraout_ECX_01 >> 8),1));
      *in_FS_OFFSET = uStack_1c;
      puStack_14 = (undefined1 *)0x46c46a;
      puStack_18 = (undefined1 *)0x46c458;
      FUN_00405dd8((int)param_2);
      return;
    }
  }
  puStack_14 = (undefined1 *)0x46c46a;
  FUN_004699f4(param_1,param_2);
  return;
}

