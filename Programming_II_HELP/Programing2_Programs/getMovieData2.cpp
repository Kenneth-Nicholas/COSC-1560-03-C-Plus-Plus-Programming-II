MovieData getMovieInfo()
{
	MovieData m;
	cout << "Enter the movie's name: ";
	getline(cin, m.title);
	cout << "Enter the movie's director's name: ";
	getline(cin, m.director);
	cout << "Enter the year the movie was released: ";
	cin >> m.year;
	cout << "Enter the length (in minutes) of the movie: ";
	cin >> m.length;
	cout << "Enter the production costs of the movie: ";
	cin >> m.costs;
	cout << "Enter the first year's reveues of the movie: ";
	cin >> m.revenues;

	cin.ignore();

	return m;
}