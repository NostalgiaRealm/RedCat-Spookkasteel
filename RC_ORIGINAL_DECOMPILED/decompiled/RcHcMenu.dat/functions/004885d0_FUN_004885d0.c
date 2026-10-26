/*
 * FUN_004885d0 at 004885d0
 * undefined __register FUN_004885d0(int param_1, int * param_2)
 * Address ranges: 004885d0-00488640
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47eb28 slot 1 for TQuery. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47eb28 slot 1 for TQuery.
   Original bytes unchanged; names and types still inferred. */

void FUN_004885d0(int param_1,int *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  
  FUN_00419288(param_1,param_2);
  (**(code **)(*param_2 + 8))
            (param_2,&DAT_0048864c,*(int *)(param_1 + 600) != 0,&LAB_004886cc,param_1,&LAB_00488698,
             param_1);
  puVar3 = &LAB_00488668;
  puVar2 = &LAB_00488688;
  iVar4 = param_1;
  uVar1 = FUN_00488584();
  (**(code **)(*param_2 + 4))(param_2,"ParamData",uVar1,puVar2,param_1,puVar3,iVar4);
  return;
}

