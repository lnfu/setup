import Link from 'next/link'

export default function Home() {
  return <>
    <header>
      <h1 className="text-2xl">Todos</h1>
      <Link
        className='border border-slate-300 text-slate-300 px-2 py-1 rounded'
        href="/new">New</Link>
    </header>
  </>
}